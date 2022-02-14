
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {scalar_t__ t_session_type; scalar_t__ t_enable; scalar_t__ t_protocol; scalar_t__ t_header_digest; scalar_t__ t_data_digest; int * t_offload; int * t_mutual_secret; int * t_mutual_user; int * t_secret; int * t_user; int * t_address; int * t_name; int * t_initiator_alias; int * t_initiator_address; int * t_initiator_name; } ;
struct iscsi_session_conf {int isc_discovery; int isc_enable; int isc_iser; void* isc_data_digest; void* isc_header_digest; int isc_offload; int isc_mutual_secret; int isc_mutual_user; int isc_secret; int isc_user; int isc_target_addr; int isc_target; int isc_initiator_alias; int isc_initiator_addr; int isc_initiator; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct iscsi_session_conf*,int ,int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct iscsi_session_conf *VAR_6,
    const struct target *VAR_7)
{
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));




 if (VAR_7->t_initiator_name != ((void*)0))
  FUNC_1(VAR_6->isc_initiator, VAR_7->t_initiator_name,
      sizeof(VAR_6->isc_initiator));
 if (VAR_7->t_initiator_address != ((void*)0))
  FUNC_1(VAR_6->isc_initiator_addr, VAR_7->t_initiator_address,
      sizeof(VAR_6->isc_initiator_addr));
 if (VAR_7->t_initiator_alias != ((void*)0))
  FUNC_1(VAR_6->isc_initiator_alias, VAR_7->t_initiator_alias,
      sizeof(VAR_6->isc_initiator_alias));
 if (VAR_7->t_name != ((void*)0))
  FUNC_1(VAR_6->isc_target, VAR_7->t_name,
      sizeof(VAR_6->isc_target));
 if (VAR_7->t_address != ((void*)0))
  FUNC_1(VAR_6->isc_target_addr, VAR_7->t_address,
      sizeof(VAR_6->isc_target_addr));
 if (VAR_7->t_user != ((void*)0))
  FUNC_1(VAR_6->isc_user, VAR_7->t_user,
      sizeof(VAR_6->isc_user));
 if (VAR_7->t_secret != ((void*)0))
  FUNC_1(VAR_6->isc_secret, VAR_7->t_secret,
      sizeof(VAR_6->isc_secret));
 if (VAR_7->t_mutual_user != ((void*)0))
  FUNC_1(VAR_6->isc_mutual_user, VAR_7->t_mutual_user,
      sizeof(VAR_6->isc_mutual_user));
 if (VAR_7->t_mutual_secret != ((void*)0))
  FUNC_1(VAR_6->isc_mutual_secret, VAR_7->t_mutual_secret,
      sizeof(VAR_6->isc_mutual_secret));
 if (VAR_7->t_session_type == VAR_5)
  VAR_6->isc_discovery = 1;
 if (VAR_7->t_enable != VAR_1)
  VAR_6->isc_enable = 1;
 if (VAR_7->t_protocol == VAR_4)
  VAR_6->isc_iser = 1;
 if (VAR_7->t_offload != ((void*)0))
  FUNC_1(VAR_6->isc_offload, VAR_7->t_offload,
      sizeof(VAR_6->isc_offload));
 if (VAR_7->t_header_digest == VAR_0)
  VAR_6->isc_header_digest = VAR_2;
 else
  VAR_6->isc_header_digest = VAR_3;
 if (VAR_7->t_data_digest == VAR_0)
  VAR_6->isc_data_digest = VAR_2;
 else
  VAR_6->isc_data_digest = VAR_3;
}
