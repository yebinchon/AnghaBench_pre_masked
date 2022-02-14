
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent_prec_psx {size_t max_name_len; char* d_name; int d_type; int d_ino; } ;
struct dirent {int d_name; int d_type; int d_ino; } ;
typedef scalar_t__ iconv_t ;
typedef int iconv_ibp ;
typedef int dirent_prec_psx ;
struct TYPE_3__ {scalar_t__ ic_precompose; struct dirent_prec_psx* dirent_nfc; int dirp; } ;
typedef TYPE_1__ PREC_DIR ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,size_t,int *) ;
 int FUNC_2 (scalar_t__,int *,size_t*,char**,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dirent* FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (int ) ;
 struct dirent_prec_psx* FUNC_6 (struct dirent_prec_psx*,size_t) ;

struct dirent_prec_psx *FUNC_7(PREC_DIR *VAR_4)
{
 struct dirent *VAR_5;
 VAR_5 = FUNC_3(VAR_4->dirp);
 if (VAR_5) {
  size_t VAR_6 = FUNC_5(VAR_5->d_name) + 1;
  size_t VAR_7 = VAR_6;

  int VAR_8 = VAR_0;

  if (VAR_7 > VAR_4->dirent_nfc->max_name_len) {
   size_t VAR_9 = sizeof(dirent_prec_psx) + VAR_7 -
    sizeof(VAR_4->dirent_nfc->d_name);

   VAR_4->dirent_nfc = FUNC_6(VAR_4->dirent_nfc, VAR_9);
   VAR_4->dirent_nfc->max_name_len = VAR_7;
  }

  VAR_4->dirent_nfc->d_ino = VAR_5->d_ino;
  VAR_4->dirent_nfc->d_type = VAR_5->d_type;

  if ((VAR_2 == 1) && FUNC_1(VAR_5->d_name, (size_t)-1, ((void*)0))) {
   if (VAR_4->ic_precompose == (iconv_t)-1) {
    FUNC_0("iconv_open(%s,%s) failed, but needed:\n"
      "    precomposed unicode is not supported.\n"
      "    If you want to use decomposed unicode, run\n"
      "    \"git config core.precomposeunicode false\"\n",
      VAR_3, VAR_1);
   } else {
    iconv_ibp VAR_10 = (iconv_ibp)VAR_5->d_name;
    size_t VAR_11 = VAR_6;
    char *VAR_12 = &VAR_4->dirent_nfc->d_name[0];
    size_t VAR_13 = VAR_4->dirent_nfc->max_name_len;
    VAR_0 = 0;
    FUNC_2(VAR_4->ic_precompose, &VAR_10, &VAR_11, &VAR_12, &VAR_13);
    if (VAR_0 || VAR_11) {






     VAR_6 = 0;
    }
   }
  } else
   VAR_6 = 0;

  if (!VAR_6)
   FUNC_4(VAR_4->dirent_nfc->d_name, VAR_5->d_name,
       VAR_4->dirent_nfc->max_name_len);

  VAR_0 = VAR_8;
  return VAR_4->dirent_nfc;
 }
 return ((void*)0);
}
