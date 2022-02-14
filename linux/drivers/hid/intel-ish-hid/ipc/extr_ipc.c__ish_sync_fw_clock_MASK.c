
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ishtp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ishtp_device*,int ,int *,int) ;
 unsigned long VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ishtp_device *VAR_3)
{
 static unsigned long VAR_4;
 uint64_t VAR_5;

 if (VAR_4 && VAR_2 - VAR_4 < 20 * VAR_0)
  return;

 VAR_4 = VAR_2;
 VAR_5 = FUNC_2(FUNC_1());
 FUNC_0(VAR_3, VAR_1, &VAR_5, sizeof(uint64_t));
}
