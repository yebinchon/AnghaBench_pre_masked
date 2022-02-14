
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ishtp_device*) ;
 int FUNC_1 (struct ishtp_device*) ;
 unsigned long FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ishtp_device *VAR_4, int VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 bool VAR_8 = 0;
 int VAR_9;

 do {
  if (VAR_5 == VAR_2) {
   VAR_8 = FUNC_1(VAR_4);
  } else if (VAR_5 == VAR_3) {
   VAR_8 = FUNC_0(VAR_4);
  } else {
   VAR_9 = -VAR_1;
   goto out;
  }

  if (!VAR_8) {
   unsigned long VAR_10;

   VAR_10 = FUNC_2(VAR_6);
   VAR_7 -= (VAR_6 - VAR_10);
  }
 } while (!VAR_8 && VAR_7 > 0);

 if (VAR_8)
  VAR_9 = 0;
 else
  VAR_9 = -VAR_0;

out:
 return VAR_9;
}
