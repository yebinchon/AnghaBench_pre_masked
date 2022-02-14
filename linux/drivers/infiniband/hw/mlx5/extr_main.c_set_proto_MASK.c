
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void *VAR_3, void *VAR_4, u8 VAR_5, u8 VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 int VAR_9 = 0;

 if (!VAR_5)
  goto out;

 VAR_7 = FUNC_0(VAR_1, VAR_3,
         VAR_2);
 VAR_8 = FUNC_0(VAR_1, VAR_4,
        VAR_2);
 if (!VAR_7) {
  FUNC_1(VAR_1, VAR_3, VAR_2, VAR_5);
  FUNC_1(VAR_1, VAR_4, VAR_2, VAR_6);
  goto out;
 }

 if (VAR_5 != VAR_7 || VAR_6 != VAR_8)
  VAR_9 = -VAR_0;
out:
 return VAR_9;
}
