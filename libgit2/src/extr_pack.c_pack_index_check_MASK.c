
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;
struct git_pack_idx_header {scalar_t__ idx_signature; int idx_version; } ;
struct TYPE_3__ {void* data; } ;
struct git_pack_file {int num_objects; int index_version; TYPE_1__ index_map; } ;
typedef scalar_t__ git_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ,size_t) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,struct stat*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_3, struct git_pack_file *VAR_4)
{
 struct git_pack_idx_header *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, *VAR_9;
 void *VAR_10;
 size_t VAR_11;
 struct stat VAR_12;
 int VAR_13;

 git_file VAR_14 = FUNC_5(VAR_3);
 if (VAR_14 < 0)
  return VAR_14;

 if (FUNC_9(VAR_14, &VAR_12) < 0) {
  FUNC_8(VAR_14);
  FUNC_2(VAR_1, "unable to stat pack index '%s'", VAR_3);
  return -1;
 }

 if (!FUNC_0(VAR_12.st_mode) ||
  !FUNC_1(VAR_12.st_size) ||
  (VAR_11 = (size_t)VAR_12.st_size) < 4 * 256 + 20 + 20)
 {
  FUNC_8(VAR_14);
  FUNC_2(VAR_0, "invalid pack index '%s'", VAR_3);
  return -1;
 }

 VAR_13 = FUNC_4(&VAR_4->index_map, VAR_14, 0, VAR_11);

 FUNC_8(VAR_14);

 if (VAR_13 < 0)
  return VAR_13;

 VAR_5 = VAR_10 = VAR_4->index_map.data;

 if (VAR_5->idx_signature == FUNC_6(VAR_2)) {
  VAR_6 = FUNC_7(VAR_5->idx_version);

  if (VAR_6 < 2 || VAR_6 > 2) {
   FUNC_3(&VAR_4->index_map);
   return FUNC_10("unsupported index version");
  }

 } else
  VAR_6 = 1;

 VAR_7 = 0;
 VAR_9 = VAR_10;

 if (VAR_6 > 1)
  VAR_9 += 2;

 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  uint32_t VAR_15 = FUNC_7(VAR_9[VAR_8]);
  if (VAR_15 < VAR_7) {
   FUNC_3(&VAR_4->index_map);
   return FUNC_10("index is non-monotonic");
  }
  VAR_7 = VAR_15;
 }

 if (VAR_6 == 1) {







  if (VAR_11 != 4*256 + VAR_7 * 24 + 20 + 20) {
   FUNC_3(&VAR_4->index_map);
   return FUNC_10("index is corrupted");
  }
 } else if (VAR_6 == 2) {
  unsigned long VAR_16 = 8 + 4*256 + VAR_7*(20 + 4 + 4) + 20 + 20;
  unsigned long VAR_17 = VAR_16;

  if (VAR_7)
   VAR_17 += (VAR_7 - 1)*8;

  if (VAR_11 < VAR_16 || VAR_11 > VAR_17) {
   FUNC_3(&VAR_4->index_map);
   return FUNC_10("wrong index size");
  }
 }

 VAR_4->num_objects = VAR_7;
 VAR_4->index_version = VAR_6;
 return 0;
}
