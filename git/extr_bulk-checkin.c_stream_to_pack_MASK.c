
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bulk_checkin_state {scalar_t__ offset; int f; scalar_t__ nr_written; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int obuf ;
typedef int ibuf ;
struct TYPE_7__ {unsigned char* next_out; int avail_out; unsigned char* next_in; scalar_t__ avail_in; } ;
typedef TYPE_1__ git_zstream ;
typedef int git_hash_ctx ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_8__ {int (* update_fn ) (int *,unsigned char*,size_t) ;} ;


 unsigned int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,char const*) ;
 unsigned int FUNC_2 (unsigned char*,int,int,size_t) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,unsigned char*,size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (int,unsigned char*,scalar_t__) ;
 int FUNC_9 (int *,unsigned char*,size_t) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_10(struct bulk_checkin_state *VAR_5,
     git_hash_ctx *VAR_6, off_t *VAR_7,
     int VAR_8, size_t VAR_9, enum object_type VAR_10,
     const char *VAR_11, unsigned VAR_12)
{
 git_zstream VAR_13;
 unsigned char VAR_14[16384];
 unsigned VAR_15;
 int VAR_16 = 129;
 int VAR_17 = (VAR_12 & VAR_0);
 off_t VAR_18 = 0;

 FUNC_6(&VAR_13, VAR_2);

 VAR_15 = FUNC_2(VAR_14, sizeof(VAR_14), VAR_10, VAR_9);
 VAR_13.next_out = VAR_14 + VAR_15;
 VAR_13.avail_out = sizeof(VAR_14) - VAR_15;

 while (VAR_16 != 128) {
  unsigned char VAR_19[16384];

  if (VAR_9 && !VAR_13.avail_in) {
   ssize_t VAR_20 = VAR_9 < sizeof(VAR_19) ? VAR_9 : sizeof(VAR_19);
   ssize_t VAR_21 = FUNC_8(VAR_8, VAR_19, VAR_20);
   if (VAR_21 < 0)
    FUNC_1("failed to read from '%s'", VAR_11);
   if (VAR_21 != VAR_20)
    FUNC_0("failed to read %d bytes from '%s'",
        (int)VAR_20, VAR_11);
   VAR_18 += VAR_20;
   if (*VAR_7 < VAR_18) {
    size_t VAR_22 = VAR_18 - *VAR_7;
    if (VAR_20 < VAR_22)
     VAR_22 = VAR_20;
    if (VAR_22)
     VAR_4->update_fn(VAR_6, VAR_19, VAR_22);
    *VAR_7 = VAR_18;
   }
   VAR_13.next_in = VAR_19;
   VAR_13.avail_in = VAR_20;
   VAR_9 -= VAR_20;
  }

  VAR_16 = FUNC_3(&VAR_13, VAR_9 ? 0 : VAR_1);

  if (!VAR_13.avail_out || VAR_16 == 128) {
   if (VAR_17) {
    size_t VAR_23 = VAR_13.next_out - VAR_14;


    if (VAR_5->nr_written &&
        VAR_3 &&
        VAR_3 < VAR_5->offset + VAR_23) {
     FUNC_4(&VAR_13);
     return -1;
    }

    FUNC_7(VAR_5->f, VAR_14, VAR_23);
    VAR_5->offset += VAR_23;
   }
   VAR_13.next_out = VAR_14;
   VAR_13.avail_out = sizeof(VAR_14);
  }

  switch (VAR_16) {
  case 129:
  case 130:
  case 128:
   continue;
  default:
   FUNC_0("unexpected deflate failure: %d", VAR_16);
  }
 }
 FUNC_5(&VAR_13);
 return 0;
}
