
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long start; scalar_t__ end; } ;
struct TYPE_5__ {unsigned long start; scalar_t__ end; } ;
struct TYPE_4__ {int control_code_page; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned long,scalar_t__,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(bool VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(VAR_2.start, VAR_2.end, VAR_5);


 VAR_6 = FUNC_0(FUNC_2(VAR_4->control_code_page));

 FUNC_1(VAR_3.start, VAR_6 + VAR_1 - 1, VAR_5);
 VAR_6 += VAR_0;
 FUNC_1(VAR_6, VAR_3.end, VAR_5);
}
