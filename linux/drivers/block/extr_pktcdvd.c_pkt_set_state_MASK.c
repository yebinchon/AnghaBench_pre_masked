
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_data {int state; scalar_t__ sector; int id; } ;
typedef enum packet_data_state { ____Placeholder_packet_data_state } packet_data_state ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*,int ,unsigned long long,char const*,char const*) ;

__attribute__((used)) static inline void FUNC_1(struct packet_data *VAR_1, enum packet_data_state VAR_2)
{
 VAR_1->state = VAR_2;
}
