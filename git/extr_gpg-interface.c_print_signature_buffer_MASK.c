
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signature_check {char* gpg_status; char* gpg_output; char const* payload; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(const struct signature_check *VAR_4, unsigned VAR_5)
{
 const char *VAR_6 = VAR_5 & VAR_0 ?
  VAR_4->gpg_status : VAR_4->gpg_output;

 if (VAR_5 & VAR_1 && VAR_4->payload)
  FUNC_0(VAR_4->payload, VAR_3);

 if (VAR_6)
  FUNC_0(VAR_6, VAR_2);
}
