
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version_ ;
struct kern {int version; } ;
typedef int str ;


 int FUNC_0 (int ,short*,int) ;
 int FUNC_1 (char*,char*,short*,short*,short*) ;
 int FUNC_2 (char*,char*,size_t*,int *,int ) ;

void FUNC_3(struct kern *VAR_0) {
   static short int VAR_1[3] = {0};
   if (!VAR_1[0]) {

      VAR_1[0] = VAR_1[1] = VAR_1[2] = -1;
      char VAR_2[256] = {0};
      size_t VAR_3 = sizeof(VAR_2);
      int VAR_4 = FUNC_2("kern.osrelease", VAR_2, &VAR_3, ((void*)0), 0);
      if (VAR_4 == 0) FUNC_1(VAR_2, "%hd.%hd.%hd", &VAR_1[0], &VAR_1[1], &VAR_1[2]);
    }
    FUNC_0(VAR_0->version, VAR_1, sizeof(VAR_1));
}
