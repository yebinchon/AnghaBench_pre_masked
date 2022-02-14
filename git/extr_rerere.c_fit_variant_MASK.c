
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerere_dir {int status_nr; scalar_t__ status; int status_alloc; } ;


 int FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (scalar_t__,char,int) ;

__attribute__((used)) static void FUNC_2(struct rerere_dir *VAR_0, int VAR_1)
{
 VAR_1++;
 FUNC_0(VAR_0->status, VAR_1, VAR_0->status_alloc);
 if (VAR_0->status_nr < VAR_1) {
  FUNC_1(VAR_0->status + VAR_0->status_nr,
         '\0', VAR_1 - VAR_0->status_nr);
  VAR_0->status_nr = VAR_1;
 }
}
