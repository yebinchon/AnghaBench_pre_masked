
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {int d_type; int d_name; } ;
struct TYPE_3__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct dirent *VAR_3, WIN32_FIND_DATAW *VAR_4)
{

 FUNC_0(VAR_3->d_name, VAR_4->cFileName, sizeof(VAR_3->d_name));


 if (VAR_4->dwFileAttributes & VAR_2)
  VAR_3->d_type = VAR_0;
 else
  VAR_3->d_type = VAR_1;
}
