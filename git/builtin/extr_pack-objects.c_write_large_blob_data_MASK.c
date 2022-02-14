
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct hashfile {int dummy; } ;
struct git_istream {int dummy; } ;
typedef int ssize_t ;
typedef int obuf ;
typedef int ibuf ;
struct TYPE_5__ {unsigned char* next_in; int avail_in; unsigned char* next_out; int avail_out; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct hashfile*,unsigned char*,int) ;
 int FUNC_6 (struct object_id const*) ;
 int VAR_4 ;
 int FUNC_7 (struct git_istream*,unsigned char*,int) ;

__attribute__((used)) static unsigned long FUNC_8(struct git_istream *VAR_5, struct hashfile *VAR_6,
        const struct object_id *VAR_7)
{
 git_zstream VAR_8;
 unsigned char VAR_9[1024 * 16];
 unsigned char VAR_10[1024 * 16];
 unsigned long VAR_11 = 0;

 FUNC_4(&VAR_8, VAR_4);

 for (;;) {
  ssize_t VAR_12;
  int VAR_13 = VAR_2;
  VAR_12 = FUNC_7(VAR_5, VAR_9, sizeof(VAR_9));
  if (VAR_12 == -1)
   FUNC_1(FUNC_0("unable to read %s"), FUNC_6(VAR_7));

  VAR_8.next_in = VAR_9;
  VAR_8.avail_in = VAR_12;
  while ((VAR_8.avail_in || VAR_12 == 0) &&
         (VAR_13 == VAR_2 || VAR_13 == VAR_0)) {
   VAR_8.next_out = VAR_10;
   VAR_8.avail_out = sizeof(VAR_10);
   VAR_13 = FUNC_2(&VAR_8, VAR_12 ? 0 : VAR_1);
   FUNC_5(VAR_6, VAR_10, VAR_8.next_out - VAR_10);
   VAR_11 += VAR_8.next_out - VAR_10;
  }
  if (VAR_8.avail_in)
   FUNC_1(FUNC_0("deflate error (%d)"), VAR_13);
  if (VAR_12 == 0) {
   if (VAR_13 != VAR_3)
    FUNC_1(FUNC_0("deflate error (%d)"), VAR_13);
   break;
  }
 }
 FUNC_3(&VAR_8);
 return VAR_11;
}
