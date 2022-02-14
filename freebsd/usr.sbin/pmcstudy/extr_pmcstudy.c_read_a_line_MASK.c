
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_2__ {int pos; scalar_t__* vals; int sum; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int * FUNC_0 (char*,int,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_2)
{
 char VAR_3[8192], *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_3, sizeof(VAR_3), VAR_2) == ((void*)0)) {
  return(0);
 }
 VAR_4 = VAR_3;
 for (VAR_7=0; VAR_7<VAR_1; VAR_7++) {
  VAR_6 = VAR_0[VAR_7].pos;
  VAR_0[VAR_7].vals[VAR_6] = FUNC_1(VAR_4, &VAR_5, 0);
  VAR_0[VAR_7].pos++;
  VAR_0[VAR_7].sum += VAR_0[VAR_7].vals[VAR_6];
  VAR_4 = VAR_5;
 }
 return (1);
}
