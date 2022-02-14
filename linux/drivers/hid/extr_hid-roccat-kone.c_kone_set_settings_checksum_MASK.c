
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint16_t ;
struct kone_settings {int checksum; } ;


 int FUNC_0 (unsigned char) ;

__attribute__((used)) static void FUNC_1(struct kone_settings *VAR_0)
{
 uint16_t VAR_1 = 0;
 unsigned char *VAR_2 = (unsigned char *)VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < sizeof(struct kone_settings) - 2; ++VAR_3, ++VAR_2)
  VAR_1 += *VAR_2;
 VAR_0->checksum = FUNC_0(VAR_1);
}
