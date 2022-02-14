
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct ISO_ARCHIMEDES {int ro_attr; int cdfs_attr; int execaddr; int loadaddr; int magic; } ;
struct TYPE_9__ {int su_tail_size; int * su_tail_data; TYPE_3__* node; } ;
typedef TYPE_4__ cd9660node ;
struct TYPE_8__ {char* name; TYPE_2__* inode; } ;
struct TYPE_6__ {int st_mtime; } ;
struct TYPE_7__ {TYPE_1__ st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 struct ISO_ARCHIMEDES* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_7(cd9660node *VAR_3)
{
 struct ISO_ARCHIMEDES *VAR_4;
 size_t VAR_5;
 int VAR_6 = -1;
 uint64_t VAR_7;

 if (VAR_3->su_tail_data != ((void*)0))

  return;

 VAR_5 = FUNC_5(VAR_3->node->name);
 if (VAR_5 < 1) return;

 if (VAR_5 >= 4 && VAR_3->node->name[VAR_5-4] == ',')

  VAR_6 = FUNC_6(VAR_3->node->name + VAR_5 - 3, ((void*)0), 16);
 if (VAR_6 == -1 && VAR_3->node->name[0] != '!')
  return;
 if (VAR_6 == -1) VAR_6 = 0;

 FUNC_0(sizeof(*VAR_4) == 32);
 VAR_4 = FUNC_2(1, sizeof(*VAR_4));

 VAR_7 = FUNC_4(VAR_3->node->inode->st.st_mtime);

 FUNC_3(VAR_4->magic, "ARCHIMEDES", 10);
 FUNC_1(0xfff00000 | (VAR_6 << 8) | (VAR_7 >> 32), VAR_4->loadaddr);
 FUNC_1(VAR_7 & 0x00ffffffffULL, VAR_4->execaddr);
 VAR_4->ro_attr = VAR_2 | VAR_1;
 VAR_4->cdfs_attr = VAR_3->node->name[0] == '!' ? VAR_0 : 0;
 VAR_3->su_tail_data = (void *)VAR_4;
 VAR_3->su_tail_size = sizeof(*VAR_4);
}
