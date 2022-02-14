
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {scalar_t__ buffer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct options*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct options *VAR_0)
{
 if (VAR_0->buffer)
  FUNC_0(VAR_0->buffer);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 return;
}
