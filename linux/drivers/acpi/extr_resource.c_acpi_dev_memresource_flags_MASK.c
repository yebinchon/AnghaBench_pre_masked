
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct resource {int flags; int end; int start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct resource *VAR_5, u64 VAR_6,
           u8 VAR_7)
{
 VAR_5->flags = VAR_2;

 if (!FUNC_0(VAR_5->start, VAR_5->end, VAR_6, 0))
  VAR_5->flags |= VAR_1 | VAR_4;

 if (VAR_7 == VAR_0)
  VAR_5->flags |= VAR_3;
}
