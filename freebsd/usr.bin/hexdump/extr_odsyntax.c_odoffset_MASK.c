
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* nextfs; TYPE_1__* nextfu; } ;
struct TYPE_7__ {TYPE_2__* nextfu; } ;
struct TYPE_6__ {char* fmt; } ;
struct TYPE_5__ {char* fmt; } ;


 size_t VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_2 ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, char ***VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;
 VAR_5 = VAR_3 == 1 ? (*VAR_4)[0] : (*VAR_4)[1];

 if (*VAR_5 != '+' && (VAR_3 < 2 ||
     (!FUNC_0(VAR_5[0]) && (VAR_5[0] != 'x' || !FUNC_1(VAR_5[1])))))
  return;

 VAR_8 = 0;




 if (VAR_5[0] == '+')
  ++VAR_5;
 if (VAR_5[0] == 'x' && FUNC_1(VAR_5[1])) {
  ++VAR_5;
  VAR_8 = 16;
 } else if (VAR_5[0] == '0' && VAR_5[1] == 'x') {
  VAR_5 += 2;
  VAR_8 = 16;
 }


 if (VAR_8 == 16)
  for (VAR_6 = VAR_5; FUNC_1(*VAR_5); ++VAR_5);
 else
  for (VAR_6 = VAR_5; FUNC_0(*VAR_5); ++VAR_5);


 if (VAR_6 == VAR_5)
  return;


 if (*VAR_5 == '.') {
  if (VAR_8)
   return;
  VAR_8 = 10;
 }

 VAR_2 = FUNC_2(VAR_6, &VAR_7, VAR_8 ? VAR_8 : 8);


 if (VAR_7 != VAR_5) {
  VAR_2 = 0;
  return;
 }

 if (*VAR_5) {
  if (*VAR_5 == 'B') {
   VAR_2 *= 1024;
   ++VAR_5;
  } else if (*VAR_5 == 'b') {
   VAR_2 *= 512;
   ++VAR_5;
  }
 }

 if (*VAR_5) {
  VAR_2 = 0;
  return;
 }





 if (VAR_8 == 16) {
  VAR_1->nextfu->fmt[VAR_0] = 'x';
  VAR_1->nextfs->nextfu->fmt[VAR_0] = 'x';
 } else if (VAR_8 == 10) {
  VAR_1->nextfu->fmt[VAR_0] = 'd';
  VAR_1->nextfs->nextfu->fmt[VAR_0] = 'd';
 }


 (*VAR_4)[1] = ((void*)0);
}
