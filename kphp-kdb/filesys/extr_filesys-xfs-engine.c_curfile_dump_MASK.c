
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int old_size; int patch_size; int mode; int actime; int modtime; int old_crc32; int patch_crc32; int new_crc32; scalar_t__ parts; scalar_t__ filename_size; scalar_t__ gid; scalar_t__ uid; } ;
struct TYPE_4__ {int name; int chunk; int chunks; int M; TYPE_1__ E; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void FUNC_1 (int VAR_1) {
  FUNC_0 (VAR_1, "curfile.name: %s\n", VAR_0.name);
  FUNC_0 (VAR_1, "curfile.chunk: %d\n", VAR_0.chunk);
  FUNC_0 (VAR_1, "curfile.chunks: %d\n", VAR_0.chunks);
  FUNC_0 (VAR_1, "curfile.M: %d\n", VAR_0.M);
  FUNC_0 (VAR_1, "curfile.E.old_size: %d\n", VAR_0.E.old_size);
  FUNC_0 (VAR_1, "curfile.E.patch_size: %d\n", VAR_0.E.patch_size);
  FUNC_0 (VAR_1, "curfile.E.mode: %d\n", VAR_0.E.mode);
  FUNC_0 (VAR_1, "curfile.E.actime: %d\n", VAR_0.E.actime);
  FUNC_0 (VAR_1, "curfile.E.modtime: %d\n", VAR_0.E.modtime);
  FUNC_0 (VAR_1, "curfile.E.old_crc32: %d\n", VAR_0.E.old_crc32);
  FUNC_0 (VAR_1, "curfile.E.patch_crc32: %d\n", VAR_0.E.patch_crc32);
  FUNC_0 (VAR_1, "curfile.E.new_crc32: %d\n", VAR_0.E.new_crc32);
  FUNC_0 (VAR_1, "curfile.E.uid: %d\n", (int) VAR_0.E.uid);
  FUNC_0 (VAR_1, "curfile.E.gid: %d\n", (int) VAR_0.E.gid);
  FUNC_0 (VAR_1, "curfile.E.filename_size: %d\n", (int) VAR_0.E.filename_size);
  FUNC_0 (VAR_1, "curfile.E.parts: %d\n", (int) VAR_0.E.parts);
}
