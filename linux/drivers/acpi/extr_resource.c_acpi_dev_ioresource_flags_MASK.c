
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct resource {int flags; int end; int start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct resource*) ;

__attribute__((used)) static void FUNC_2(struct resource *VAR_7, u64 VAR_8,
          u8 VAR_9, u8 VAR_10)
{
 VAR_7->flags = VAR_3;

 if (!FUNC_0(VAR_7->start, VAR_7->end, VAR_8, 1))
  VAR_7->flags |= VAR_2 | VAR_6;

 if (!FUNC_1(VAR_7))
  VAR_7->flags |= VAR_2 | VAR_6;

 if (VAR_9 == VAR_0)
  VAR_7->flags |= VAR_4;
 if (VAR_10 == VAR_1)
  VAR_7->flags |= VAR_5;
}
