
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stu300_dev {scalar_t__ virtbase; int clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct stu300_dev*,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stu300_dev *VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;
 int VAR_8;


 FUNC_3(0x00, VAR_5->virtbase + VAR_0);




 FUNC_3(0x00, VAR_5->virtbase + VAR_2);







 VAR_7 = FUNC_0(VAR_5->clk);
 VAR_8 = FUNC_2(VAR_5, VAR_7);

 if (VAR_8)
  return VAR_8;




 FUNC_3(VAR_1,
      VAR_5->virtbase + VAR_0);
 FUNC_3(VAR_1,
      VAR_5->virtbase + VAR_0);

 VAR_6 = FUNC_1(VAR_5->virtbase + VAR_4);
 VAR_6 = FUNC_1(VAR_5->virtbase + VAR_3);

 return 0;
}
