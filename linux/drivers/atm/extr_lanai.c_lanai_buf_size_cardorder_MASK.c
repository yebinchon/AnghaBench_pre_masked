
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lanai_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lanai_buffer const*) ;

__attribute__((used)) static int FUNC_2(const struct lanai_buffer *VAR_1)
{
 int VAR_2 = FUNC_0(FUNC_1(VAR_1)) + (VAR_0 - 10);


 if (VAR_2 > 7)
  VAR_2 = 7;
 return VAR_2;
}
