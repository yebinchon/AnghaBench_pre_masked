
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_rcar_priv {int lock; scalar_t__ has_both_edge_trigger; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct gpio_rcar_priv*,int ,unsigned int,int) ;
 int FUNC_2 (struct gpio_rcar_priv*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct gpio_rcar_priv *VAR_5,
        unsigned int VAR_6,
        bool VAR_7,
        bool VAR_8,
        bool VAR_9)
{
 unsigned long VAR_10;






 FUNC_3(&VAR_5->lock, VAR_10);


 FUNC_1(VAR_5, VAR_4, VAR_6, !VAR_7);


 FUNC_1(VAR_5, VAR_1, VAR_6, !VAR_8);


 if (VAR_5->has_both_edge_trigger)
  FUNC_1(VAR_5, VAR_0, VAR_6, VAR_9);


 FUNC_1(VAR_5, VAR_3, VAR_6, 1);


 if (!VAR_8)
  FUNC_2(VAR_5, VAR_2, FUNC_0(VAR_6));

 FUNC_4(&VAR_5->lock, VAR_10);
}
