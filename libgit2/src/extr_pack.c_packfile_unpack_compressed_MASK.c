
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* next_out; unsigned char* next_in; size_t total_out; scalar_t__ avail_out; int avail_in; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ uInt ;
struct git_pack_file {int dummy; } ;
typedef int stream ;
struct TYPE_9__ {size_t len; unsigned char* data; int type; } ;
typedef TYPE_2__ git_rawobj ;
typedef int git_off_t ;
typedef int git_object_t ;
typedef int git_mwindow ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char* FUNC_2 (int,size_t) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 unsigned char* FUNC_10 (struct git_pack_file*,int **,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(
 git_rawobj *VAR_8,
 struct git_pack_file *VAR_9,
 git_mwindow **VAR_10,
 git_off_t *VAR_11,
 size_t VAR_12,
 git_object_t VAR_13)
{
 size_t VAR_14;
 int VAR_15;
 z_stream VAR_16;
 unsigned char *VAR_17, *VAR_18;

 FUNC_1(&VAR_14, VAR_12, 1);
 VAR_17 = FUNC_2(1, VAR_14);
 FUNC_0(VAR_17);

 FUNC_9(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.next_out = VAR_17;
 VAR_16.avail_out = (uInt)VAR_14;
 VAR_16.zalloc = VAR_6;
 VAR_16.zfree = VAR_7;

 VAR_15 = FUNC_8(&VAR_16);
 if (VAR_15 != VAR_4) {
  FUNC_3(VAR_17);
  FUNC_4(VAR_1, "failed to init zlib stream on unpack");

  return -1;
 }

 do {
  VAR_18 = FUNC_10(VAR_9, VAR_10, *VAR_11, &VAR_16.avail_in);
  VAR_16.next_in = VAR_18;
  VAR_15 = FUNC_6(&VAR_16, VAR_3);
  FUNC_5(VAR_10);

  if (!VAR_16.avail_out)
   break;

  if (VAR_15 == VAR_2 && VAR_18 == ((void*)0)) {
   FUNC_7(&VAR_16);
   FUNC_3(VAR_17);
   return VAR_0;
  }

  *VAR_11 += VAR_16.next_in - VAR_18;
 } while (VAR_15 == VAR_4 || VAR_15 == VAR_2);

 FUNC_7(&VAR_16);

 if ((VAR_15 != VAR_5) || VAR_16.total_out != VAR_12) {
  FUNC_3(VAR_17);
  FUNC_4(VAR_1, "error inflating zlib stream");
  return -1;
 }

 VAR_8->type = VAR_13;
 VAR_8->len = VAR_12;
 VAR_8->data = VAR_17;
 return 0;
}
