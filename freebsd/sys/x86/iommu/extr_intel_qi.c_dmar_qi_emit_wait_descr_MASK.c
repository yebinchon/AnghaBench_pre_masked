
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmar_unit {int inv_waitd_seq_hw_phys; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct dmar_unit*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct dmar_unit *VAR_4, uint32_t VAR_5, bool VAR_6,
    bool VAR_7, bool VAR_8)
{

 FUNC_0(VAR_4);
 FUNC_2(VAR_4, VAR_1 |
     (VAR_6 ? VAR_2 : 0) |
     (VAR_7 ? VAR_3 : 0) |
     (VAR_8 ? VAR_0 : 0) |
     (VAR_7 ? FUNC_1(VAR_5) : 0),
     VAR_7 ? VAR_4->inv_waitd_seq_hw_phys : 0);
}
