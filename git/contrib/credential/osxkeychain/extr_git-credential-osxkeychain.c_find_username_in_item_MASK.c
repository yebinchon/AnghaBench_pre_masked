
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length; int data; int tag; } ;
struct TYPE_5__ {int count; TYPE_2__* attr; } ;
typedef int SecKeychainItemRef ;
typedef TYPE_1__ SecKeychainAttributeList ;
typedef TYPE_2__ SecKeychainAttribute ;


 scalar_t__ FUNC_0 (int ,int *,TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(SecKeychainItemRef VAR_1)
{
 SecKeychainAttributeList VAR_2;
 SecKeychainAttribute VAR_3;

 VAR_2.count = 1;
 VAR_2.attr = &VAR_3;
 VAR_3.tag = VAR_0;

 if (FUNC_0(VAR_1, ((void*)0), &VAR_2, ((void*)0), ((void*)0)))
  return;

 FUNC_2("username", VAR_3.data, VAR_3.length);
 FUNC_1(&VAR_2, ((void*)0));
}
