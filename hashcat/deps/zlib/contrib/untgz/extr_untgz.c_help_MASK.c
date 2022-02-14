
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 () ;

void FUNC_3(int VAR_0)
{
  FUNC_1("untgz version 0.2.1\n"
         "  using zlib version %s\n\n",
         FUNC_2());
  FUNC_1("Usage: untgz file.tgz            extract all files\n"
         "       untgz file.tgz fname ...  extract selected files\n"
         "       untgz -l file.tgz         list archive contents\n"
         "       untgz -h                  display this help\n");
  FUNC_0(VAR_0);
}
