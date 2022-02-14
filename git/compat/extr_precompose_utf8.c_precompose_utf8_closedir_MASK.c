
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ iconv_t ;
struct TYPE_4__ {scalar_t__ ic_precompose; struct TYPE_4__* dirent_nfc; int dirp; } ;
typedef TYPE_1__ PREC_DIR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(PREC_DIR *VAR_1)
{
 int VAR_2;
 int VAR_3;
 VAR_2 = FUNC_0(VAR_1->dirp);
 VAR_3 = VAR_0;
 if (VAR_1->ic_precompose != (iconv_t)-1)
  FUNC_2(VAR_1->ic_precompose);
 FUNC_1(VAR_1->dirent_nfc);
 FUNC_1(VAR_1);
 VAR_0 = VAR_3;
 return VAR_2;
}
