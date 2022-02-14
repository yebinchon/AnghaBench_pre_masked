
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xen_drm_front_info {int dbuf_list; } ;
struct xen_drm_front_dbuf {int list; int dbuf_cookie; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct xen_drm_front_info *VAR_0,
        struct xen_drm_front_dbuf *VAR_1, u64 VAR_2)
{
 VAR_1->dbuf_cookie = VAR_2;
 FUNC_0(&VAR_1->list, &VAR_0->dbuf_list);
}
