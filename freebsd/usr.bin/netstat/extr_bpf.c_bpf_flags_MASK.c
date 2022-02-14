
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbpf_d {scalar_t__ bd_direction; scalar_t__ bd_locked; scalar_t__ bd_async; scalar_t__ bd_feedback; scalar_t__ bd_hdrcmplt; scalar_t__ bd_immediate; scalar_t__ bd_promisc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct xbpf_d *VAR_2, char *VAR_3)
{

 *VAR_3++ = VAR_2->bd_promisc ? 'p' : '-';
 *VAR_3++ = VAR_2->bd_immediate ? 'i' : '-';
 *VAR_3++ = VAR_2->bd_hdrcmplt ? '-' : 'f';
 *VAR_3++ = (VAR_2->bd_direction == VAR_0) ? '-' :
     ((VAR_2->bd_direction == VAR_1) ? 'o' : 's');
 *VAR_3++ = VAR_2->bd_feedback ? 'b' : '-';
 *VAR_3++ = VAR_2->bd_async ? 'a' : '-';
 *VAR_3++ = VAR_2->bd_locked ? 'l' : '-';
 *VAR_3++ = '\0';

 if (VAR_2->bd_promisc)
  FUNC_0("{e:promiscuous/}");
 if (VAR_2->bd_immediate)
  FUNC_0("{e:immediate/}");
 if (VAR_2->bd_hdrcmplt)
  FUNC_0("{e:header-complete/}");
 FUNC_0("{e:direction}", (VAR_2->bd_direction == VAR_0) ? "input" :
     (VAR_2->bd_direction == VAR_1) ? "output" : "bidirectional");
 if (VAR_2->bd_feedback)
  FUNC_0("{e:feedback/}");
 if (VAR_2->bd_async)
  FUNC_0("{e:async/}");
 if (VAR_2->bd_locked)
  FUNC_0("{e:locked/}");
}
