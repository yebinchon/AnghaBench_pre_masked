
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hdcp2_dp_msg_data {scalar_t__ msg_id; } ;


 int FUNC_0 (struct hdcp2_dp_msg_data const*) ;
 struct hdcp2_dp_msg_data const* VAR_0 ;

__attribute__((used)) static const struct hdcp2_dp_msg_data *FUNC_1(u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].msg_id == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
