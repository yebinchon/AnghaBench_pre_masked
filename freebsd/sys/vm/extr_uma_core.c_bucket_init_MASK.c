
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uma_bucket_zone {int ubz_entries; int ubz_name; int ubz_zone; } ;
struct uma_bucket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct uma_bucket_zone* VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int *,int *,int *,int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct uma_bucket_zone *VAR_5;
 int VAR_6;

 for (VAR_5 = &VAR_4[0]; VAR_5->ubz_entries != 0; VAR_5++) {
  VAR_6 = FUNC_0(sizeof(struct uma_bucket), sizeof(void *));
  VAR_6 += sizeof(void *) * VAR_5->ubz_entries;
  VAR_5->ubz_zone = FUNC_1(VAR_5->ubz_name, VAR_6,
      ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_0,
      VAR_2 | VAR_1 | VAR_3);
 }
}
