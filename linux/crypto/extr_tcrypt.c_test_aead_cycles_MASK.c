
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_0, int VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (VAR_1)
   VAR_4 = FUNC_2(VAR_0, FUNC_1(VAR_0));
  else
   VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_0));

  if (VAR_4)
   goto out;
 }


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  cycles_t VAR_6, VAR_7;

  VAR_6 = FUNC_3();
  if (VAR_1)
   VAR_4 = FUNC_2(VAR_0, FUNC_1(VAR_0));
  else
   VAR_4 = FUNC_2(VAR_0, FUNC_0(VAR_0));
  VAR_7 = FUNC_3();

  if (VAR_4)
   goto out;

  VAR_3 += VAR_7 - VAR_6;
 }

out:
 if (VAR_4 == 0)
  FUNC_4("1 operation in %lu cycles (%d bytes)\n",
         (VAR_3 + 4) / 8, VAR_2);

 return VAR_4;
}
