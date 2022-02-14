
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxnas_hcd {int clk; int syscon; scalar_t__ use_phya; scalar_t__ use_pllb; int rst_phyb; int rst_phya; int rst_host; int phyref; int refsrc; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct oxnas_hcd *VAR_11)
{
 if (VAR_11->use_pllb) {

  FUNC_4(VAR_11->refsrc);

  FUNC_4(VAR_11->phyref);

  FUNC_6(VAR_11->syscon, VAR_0, 0xffff, FUNC_1(50) | FUNC_0(0));
 } else {

  FUNC_6(VAR_11->syscon, VAR_1, 0xffff, FUNC_3(25) | FUNC_2(0));
 }


 FUNC_7(VAR_11->rst_host);
 FUNC_7(VAR_11->rst_phya);
 FUNC_7(VAR_11->rst_phyb);



 FUNC_6(VAR_11->syscon, VAR_3, 0xffff,
     (2UL << VAR_4) |
     (0xe0UL << VAR_6));

 FUNC_6(VAR_11->syscon, VAR_3, 0xffff,
     (1UL << VAR_5) |
     (2UL << VAR_4) |
     (0xe0UL << VAR_6));

 FUNC_6(VAR_11->syscon, VAR_3, 0xffff,
     (0xfUL << VAR_4) |
     (0xaaUL << VAR_6));

 FUNC_6(VAR_11->syscon, VAR_3, 0xffff,
     (1UL << VAR_5) |
     (0xfUL << VAR_4) |
     (0xaaUL << VAR_6));

 if (VAR_11->use_pllb)
  FUNC_6(VAR_11->syscon, VAR_8, 0xffff,
      VAR_7 | VAR_9);
 else
  FUNC_6(VAR_11->syscon, VAR_8, 0xffff,
      VAR_7 | VAR_10);

 if (VAR_11->use_phya) {

  FUNC_5(VAR_11->syscon, VAR_8, VAR_2, 0);
 }


 FUNC_4(VAR_11->clk);
}
