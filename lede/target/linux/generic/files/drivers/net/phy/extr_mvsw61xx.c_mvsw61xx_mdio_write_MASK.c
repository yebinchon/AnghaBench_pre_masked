
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct switch_dev*,int ,int ,int ) ;
 int FUNC_2 (struct switch_dev*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct switch_dev *VAR_5, int VAR_6, int VAR_7, u16 VAR_8)
{
 FUNC_2(VAR_5, FUNC_0(VAR_3), VAR_8);

 FUNC_2(VAR_5, FUNC_0(VAR_4),
      VAR_2 | (VAR_6 << VAR_0) | VAR_7);

 return FUNC_1(VAR_5, FUNC_0(VAR_4),
        VAR_1, 0) < 0;
}
