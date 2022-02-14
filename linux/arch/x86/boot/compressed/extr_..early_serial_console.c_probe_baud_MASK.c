
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(int VAR_5)
{
 unsigned char VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9;

 VAR_6 = FUNC_0(VAR_5 + VAR_4);
 FUNC_1(VAR_6 | VAR_1, VAR_5 + VAR_4);
 VAR_7 = FUNC_0(VAR_5 + VAR_3);
 VAR_8 = FUNC_0(VAR_5 + VAR_2);
 FUNC_1(VAR_6, VAR_5 + VAR_4);
 VAR_9 = (VAR_8 << 8) | VAR_7;

 return VAR_0 / VAR_9;
}
