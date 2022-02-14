
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_id {int remote_addr; int m_remote_addr; int local_addr; int m_local_addr; } ;



__attribute__((used)) static int FUNC_0(struct iw_cm_id *VAR_0, bool VAR_1)
{
 VAR_0->m_local_addr = VAR_0->local_addr;
 VAR_0->m_remote_addr = VAR_0->remote_addr;

 return 0;
}
