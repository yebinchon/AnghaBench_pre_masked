
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned char uint32_t ;
struct TYPE_10__ {unsigned char* data; } ;
struct git_pack_file {int index_version; scalar_t__ num_objects; TYPE_1__ index_map; } ;
struct TYPE_11__ {int* id; } ;
typedef TYPE_2__ git_oid ;
typedef int git_off_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,TYPE_2__ const*,size_t) ;
 int FUNC_4 (unsigned char*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,unsigned char const*) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_2__ const*,size_t) ;
 int FUNC_7 (struct git_pack_file*,int) ;
 unsigned int FUNC_8 (unsigned char const) ;
 int FUNC_9 (struct git_pack_file*) ;
 int FUNC_10 (char*,unsigned int,...) ;
 int FUNC_11 (unsigned char const*,unsigned int,unsigned int,unsigned int,int*) ;

__attribute__((used)) static int FUNC_12(
 git_off_t *VAR_2,
 git_oid *VAR_3,
 struct git_pack_file *VAR_4,
 const git_oid *VAR_5,
 size_t VAR_6)
{
 const uint32_t *VAR_7;
 const unsigned char *VAR_8;
 unsigned VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;
 git_off_t VAR_14;
 const unsigned char *VAR_15 = 0;

 *VAR_2 = 0;

 if (VAR_4->index_version == -1) {
  int VAR_16;

  if ((VAR_16 = FUNC_9(VAR_4)) < 0)
   return VAR_16;
  FUNC_0(VAR_4->index_map.data);
 }

 VAR_8 = VAR_4->index_map.data;
 VAR_7 = VAR_4->index_map.data;

 if (VAR_4->index_version > 1) {
  VAR_7 += 2;
  VAR_8 += 8;
 }

 VAR_8 += 4 * 256;
 VAR_9 = FUNC_8(VAR_7[(int)VAR_5->id[0]]);
 VAR_10 = ((VAR_5->id[0] == 0x0) ? 0 : FUNC_8(VAR_7[(int)VAR_5->id[0] - 1]));

 if (VAR_4->index_version > 1) {
  VAR_11 = 20;
 } else {
  VAR_11 = 24;
  VAR_8 += 4;
 }






 VAR_12 = FUNC_11(VAR_8, VAR_11, VAR_10, VAR_9, VAR_5->id);

 if (VAR_12 >= 0) {

  VAR_13 = 1;
  VAR_15 = VAR_8 + VAR_12 * VAR_11;
 } else {


  VAR_12 = - 1 - VAR_12;
  if (VAR_12 < (int)VAR_4->num_objects) {
   VAR_15 = VAR_8 + VAR_12 * VAR_11;

   if (!FUNC_6(VAR_5, (const git_oid *)VAR_15, VAR_6))
    VAR_13 = 1;
  }
 }

 if (VAR_13 && VAR_6 != VAR_1 && VAR_12 + 1 < (int)VAR_4->num_objects) {

  const unsigned char *VAR_17 = VAR_15 + VAR_11;

  if (!FUNC_6(VAR_5, (const git_oid *)VAR_17, VAR_6)) {
   VAR_13 = 2;
  }
 }

 if (!VAR_13)
  return FUNC_3("failed to find offset for pack entry", VAR_5, VAR_6);
 if (VAR_13 > 1)
  return FUNC_2("found multiple offsets for pack entry");

 if ((VAR_14 = FUNC_7(VAR_4, VAR_12)) < 0) {
  FUNC_1(VAR_0, "packfile index is corrupt");
  return -1;
 }

 *VAR_2 = VAR_14;
 FUNC_5(VAR_3, VAR_15);
 return 0;
}
