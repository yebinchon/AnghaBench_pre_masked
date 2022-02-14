
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* bytes; } ;
typedef TYPE_1__ decFloat ;
typedef int Int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,char*) ;
 int FUNC_1 (char*,char const*,char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;

void FUNC_4(const decFloat *VAR_2, const char *VAR_3) {
  char VAR_4[VAR_0*2+VAR_0/4+1];
  char VAR_5[VAR_1];
  Int VAR_6, VAR_7=0;

  for (VAR_6=0; VAR_6<VAR_0; VAR_6++) {



      FUNC_2(&VAR_4[VAR_7], "%02x", VAR_2->bytes[VAR_6]);

    VAR_7+=2;

    if ((VAR_6+1)%4==0) {FUNC_3(&VAR_4[VAR_7], " "); VAR_7++;}
    }
  FUNC_0(VAR_2, VAR_5);
  FUNC_1(">%s> %s [big-endian]  %s\n", VAR_3, VAR_4, VAR_5);
  return;
  }
