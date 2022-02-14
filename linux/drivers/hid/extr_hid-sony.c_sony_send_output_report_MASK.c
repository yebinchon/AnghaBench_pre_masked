
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int (* send_output_report ) (struct sony_sc*) ;} ;


 int FUNC_0 (struct sony_sc*) ;

__attribute__((used)) static inline void FUNC_1(struct sony_sc *VAR_0)
{
 if (VAR_0->send_output_report)
  VAR_0->send_output_report(VAR_0);
}
