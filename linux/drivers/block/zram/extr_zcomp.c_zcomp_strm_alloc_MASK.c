
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcomp_strm {void* buffer; int tfm; } ;
struct zcomp {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct zcomp_strm* FUNC_3 (int,int) ;
 int FUNC_4 (struct zcomp_strm*) ;

__attribute__((used)) static struct zcomp_strm *FUNC_5(struct zcomp *VAR_2)
{
 struct zcomp_strm *VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->tfm = FUNC_2(VAR_2->name, 0, 0);




 VAR_3->buffer = (void *)FUNC_1(VAR_0 | VAR_1, 1);
 if (FUNC_0(VAR_3->tfm) || !VAR_3->buffer) {
  FUNC_4(VAR_3);
  VAR_3 = ((void*)0);
 }
 return VAR_3;
}
