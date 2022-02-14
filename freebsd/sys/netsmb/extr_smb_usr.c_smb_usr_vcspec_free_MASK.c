
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vcspec {scalar_t__ lap; scalar_t__ sap; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct smb_vcspec *VAR_0)
{
 if (VAR_0->sap)
  FUNC_0(VAR_0->sap);
 if (VAR_0->lap)
  FUNC_0(VAR_0->lap);
}
