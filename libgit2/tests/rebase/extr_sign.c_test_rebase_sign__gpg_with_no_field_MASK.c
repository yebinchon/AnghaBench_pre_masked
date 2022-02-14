
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_4__ {int signing_cb; } ;
typedef TYPE_1__ git_rebase_options ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_16(void)
{
 git_rebase *VAR_5;
 git_reference *VAR_6, *VAR_7;
 git_annotated_commit *VAR_8, *VAR_9;
 git_rebase_operation *VAR_10;
 git_oid VAR_11, VAR_12;
 git_rebase_options VAR_13 = VAR_1;
 git_commit *VAR_14;
 const char *VAR_15 = "tree cd99b26250099fc38d30bfaed7797a7275ed3366\nparent f87d14a4a236582a0278a916340a793714256864\nauthor Edward Thomson <ethomson@edwardthomson.com> 1405625055 -0400\ncommitter Rebaser <rebaser@rebaser.rb> 1405694510 +0000\ngpgsig -----BEGIN PGP SIGNATURE-----\n \n iQIzBAEBCgAdFiEEgVlDEfSlmKn0fvGgK++h5T2/ctIFAlwZcrAACgkQK++h5T2/\n ctIPVhAA42RyZhMdKl5Bm0KtQco2scsukIg2y7tjSwhti91zDu3HQgpusjjo0fQx\n ZzB+OrmlvQ9CDcGpZ0THIzXD8GRJoDMPqdrvZVrBWkGcHvw7/YPA8skzsjkauJ8W\n 7lzF5LCuHSS6OUmPT/+5hEHPin5PB3zhfszyC+Q7aujnIuPJMrKiMnUa+w1HWifM\n km49OOygQ9S6NQoVuEQede22+c76DlDL7yFghGoo1f0sKCE/9LW6SEnwI/bWv9eo\n nom5vOPrvQeJiYCQk+2DyWo8RdSxINtY+G9bPE4RXm+6ZgcXECPm9TYDIWpL36fC\n jvtGLs98woWFElOziBMp5Tb630GMcSI+q5ivHfJ3WS5NKLYLHBNK4iSFN0/dgAnB\n dj6GcKXKWnIBWn6ZM4o40pcM5KSRUUCLtA0ZmjJH4c4zx3X5fUxd+enwkf3e9VZO\n fNKC/+xfq6NfoPUPK9+UnchHpJaJw7RG5tZS+sWCz2xpQ1y3/o49xImNyM3wnpvB\n cRAZabqIHpZa9/DIUkELOtCzln6niqkjRgg3M/YCCNznwV+0RNgz87VtyTPerdef\n xrqn0+ROMF6ebVqIs6PPtuPkxnAJu7TMKXVB5rFnAewS24e6cIGFzeIA7810py3l\n cttVRsdOoego+fiy08eFE+aJIeYiINRGhqOBTsuqG4jIdpdKxPE=\n =KbsY\n -----END PGP SIGNATURE-----\n";
 VAR_13.signing_cb = VAR_4;

 FUNC_3(FUNC_15(&VAR_6, VAR_2, "refs/heads/gravy"));
 FUNC_3(FUNC_15(&VAR_7, VAR_2, "refs/heads/veal"));

 FUNC_3(FUNC_5(&VAR_8, VAR_2, VAR_6));
 FUNC_3(FUNC_5(&VAR_9, VAR_2, VAR_7));

 FUNC_3(FUNC_12(&VAR_5, VAR_2, VAR_8, VAR_9, ((void*)0), &VAR_13));

 FUNC_3(FUNC_13(&VAR_10, VAR_5));
 FUNC_3(FUNC_10(&VAR_11, VAR_5, ((void*)0), VAR_3, ((void*)0), ((void*)0)));

 FUNC_9(&VAR_12, "bf78348e45c8286f52b760f1db15cb6da030f2ef");
 FUNC_0(&VAR_12, &VAR_11);

 FUNC_3(FUNC_7(&VAR_14, VAR_2, &VAR_11));
 FUNC_1(VAR_15, FUNC_8(VAR_14));

 FUNC_2(VAR_0, FUNC_13(&VAR_10, VAR_5));

 FUNC_14(VAR_6);
 FUNC_14(VAR_7);
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 FUNC_6(VAR_14);
 FUNC_11(VAR_5);
}
