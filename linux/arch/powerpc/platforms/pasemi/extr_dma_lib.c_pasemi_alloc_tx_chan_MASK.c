
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pasemi_dmachan_type { ____Placeholder_pasemi_dmachan_type } pasemi_dmachan_type ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(enum pasemi_dmachan_type VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;

 switch (VAR_3 & (129|128)) {
 case 129:
  VAR_5 = 0;
  VAR_6 = 10;
  break;
 case 128:
  VAR_5 = 10;
  VAR_6 = VAR_1;
  break;
 default:
  VAR_5 = 0;
  VAR_6 = VAR_1;
  break;
 }
retry:
 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_5);
 if (VAR_4 >= VAR_6)
  return -VAR_0;
 if (!FUNC_1(VAR_4, VAR_2))
  goto retry;

 return VAR_4;
}
