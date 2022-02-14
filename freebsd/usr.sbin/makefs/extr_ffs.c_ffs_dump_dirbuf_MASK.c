
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct direct {int d_namlen; char* d_name; int d_type; int d_ino; int d_reclen; } ;
typedef scalar_t__ doff_t ;
struct TYPE_3__ {int size; int cur; scalar_t__ buf; } ;
typedef TYPE_1__ dirbuf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(dirbuf_t *VAR_0, const char *VAR_1, int VAR_2)
{
 doff_t VAR_3;
 struct direct *VAR_4;
 uint16_t VAR_5;

 FUNC_1 (VAR_0 != ((void*)0));
 FUNC_1 (VAR_1 != ((void*)0));
 FUNC_3("ffs_dump_dirbuf: dir %s size %d cur %d\n",
     VAR_1, VAR_0->size, VAR_0->cur);

 for (VAR_3 = 0; VAR_3 < VAR_0->size; ) {
  VAR_4 = (struct direct *)(VAR_0->buf + VAR_3);
  VAR_5 = FUNC_4(VAR_4->d_reclen, VAR_2);
  FUNC_3(
     " inode %4d %7s offset %4d reclen %3d namlen %3d name %s\n",
      FUNC_5(VAR_4->d_ino, VAR_2),
      FUNC_2(FUNC_0(VAR_4->d_type)), VAR_3, VAR_5,
      VAR_4->d_namlen, VAR_4->d_name);
  VAR_3 += VAR_5;
  FUNC_1(VAR_5 > 0);
 }
}
