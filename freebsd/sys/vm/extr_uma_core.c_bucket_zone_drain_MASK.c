
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uma_bucket_zone {scalar_t__ ubz_entries; int ubz_zone; } ;


 int VAR_0 ;
 struct uma_bucket_zone* VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct uma_bucket_zone *VAR_2;

 for (VAR_2 = &VAR_1[0]; VAR_2->ubz_entries != 0; VAR_2++)
  FUNC_0(VAR_2->ubz_zone, VAR_0);
}
