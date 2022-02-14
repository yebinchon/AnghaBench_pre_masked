
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ avail_in; char* msg; int avail_out; } ;
struct TYPE_6__ {scalar_t__ avail_in; TYPE_4__ z; scalar_t__ avail_out; } ;
typedef TYPE_1__ git_zstream ;



 int VAR_0 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(git_zstream *VAR_1, int VAR_2)
{
 int VAR_3;

 for (;;) {
  FUNC_5(VAR_1);

  VAR_3 = FUNC_2(&VAR_1->z,
     (VAR_1->z.avail_in != VAR_1->avail_in)
     ? 0 : VAR_2);
  if (VAR_3 == VAR_0)
   FUNC_0("inflate: out of memory");
  FUNC_4(VAR_1);





  if ((VAR_1->avail_out && !VAR_1->z.avail_out) &&
      (VAR_3 == 129 || VAR_3 == 130))
   continue;
  break;
 }

 switch (VAR_3) {

 case 130:
 case 129:
 case 128:
  return VAR_3;
 default:
  break;
 }
 FUNC_1("inflate: %s (%s)", FUNC_3(VAR_3),
       VAR_1->z.msg ? VAR_1->z.msg : "no message");
 return VAR_3;
}
