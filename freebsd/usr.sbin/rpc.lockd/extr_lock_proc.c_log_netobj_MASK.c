
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_len; int* n_bytes; } ;
typedef TYPE_1__ netobj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_2(netobj *VAR_2)
{
 char VAR_3[(sizeof(char)*2)*VAR_1+2];
 char VAR_4[sizeof(char)*VAR_1+1];
 unsigned int VAR_5, VAR_6;
 char *VAR_7, *VAR_8;


 if (VAR_2->n_len > VAR_1) {
  FUNC_1(VAR_0, "SOMEONE IS TRYING TO DO SOMETHING NASTY!\n");
  FUNC_1(VAR_0, "netobj too large! Should be %d was %d\n",
      VAR_1, VAR_2->n_len);
 }

 VAR_6 = (VAR_2->n_len < VAR_1 ? VAR_2->n_len : VAR_1);
 for (VAR_5=0, VAR_7 = VAR_3, VAR_8 = VAR_4; VAR_5 < VAR_6;
     VAR_5++, VAR_7 +=2, VAR_8 +=1) {
  FUNC_0(VAR_7,"%02X",*(VAR_2->n_bytes+VAR_5));
  FUNC_0(VAR_8,"%c",*(VAR_2->n_bytes+VAR_5));
 }
 *VAR_7 = '\0';
 *VAR_8 = '\0';
 FUNC_1(VAR_0,"netobjvals: %s\n",VAR_3);
 FUNC_1(VAR_0,"netobjascs: %s\n",VAR_4);
}
