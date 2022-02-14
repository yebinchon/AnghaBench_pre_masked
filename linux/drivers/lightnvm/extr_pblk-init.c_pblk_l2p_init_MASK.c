
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {scalar_t__ capacity; int trans_map; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (struct pblk*,char*,size_t) ;
 int FUNC_2 (struct pblk*,int) ;
 int FUNC_3 (struct ppa_addr*) ;
 int FUNC_4 (struct pblk*,scalar_t__,struct ppa_addr) ;
 size_t FUNC_5 (struct pblk*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct pblk *VAR_6, bool VAR_7)
{
 sector_t VAR_8;
 struct ppa_addr VAR_9;
 size_t VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_5(VAR_6);
 VAR_6->trans_map = FUNC_0(VAR_10, VAR_1 | VAR_4
     | VAR_5 | VAR_3,
     VAR_2);
 if (!VAR_6->trans_map) {
  FUNC_1(VAR_6, "failed to allocate L2P (need %zu of memory)\n",
    VAR_10);
  return -VAR_0;
 }

 FUNC_3(&VAR_9);

 for (VAR_8 = 0; VAR_8 < VAR_6->capacity; VAR_8++)
  FUNC_4(VAR_6, VAR_8, VAR_9);

 VAR_11 = FUNC_2(VAR_6, VAR_7);
 if (VAR_11)
  FUNC_6(VAR_6->trans_map);

 return VAR_11;
}
