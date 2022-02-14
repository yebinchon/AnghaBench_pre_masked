
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {scalar_t__ mgmt_class; int status; int method; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct ib_smp *VAR_5)
{




 VAR_5->method = VAR_3;
 if (VAR_5->mgmt_class == VAR_2)
  VAR_5->status |= VAR_4;
 return VAR_0 | VAR_1;
}
