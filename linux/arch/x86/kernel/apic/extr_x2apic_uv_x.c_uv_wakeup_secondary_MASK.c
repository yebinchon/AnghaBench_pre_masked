
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(int VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_7);
 VAR_7 |= VAR_6;

 VAR_9 = (1UL << VAR_4) |
     (VAR_7 << VAR_3) |
     ((VAR_8 << VAR_5) >> 12) |
     VAR_0;

 FUNC_1(VAR_10, VAR_2, VAR_9);

 VAR_9 = (1UL << VAR_4) |
     (VAR_7 << VAR_3) |
     ((VAR_8 << VAR_5) >> 12) |
     VAR_1;

 FUNC_1(VAR_10, VAR_2, VAR_9);

 return 0;
}
