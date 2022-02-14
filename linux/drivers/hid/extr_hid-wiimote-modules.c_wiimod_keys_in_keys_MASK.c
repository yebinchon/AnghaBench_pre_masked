
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int input; } ;
typedef int __u8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int * VAR_11 ;

__attribute__((used)) static void FUNC_2(struct wiimote_data *VAR_12, const __u8 *VAR_13)
{
 FUNC_0(VAR_12->input, VAR_11[VAR_4],
       !!(VAR_13[0] & 0x01));
 FUNC_0(VAR_12->input, VAR_11[VAR_8],
       !!(VAR_13[0] & 0x02));
 FUNC_0(VAR_12->input, VAR_11[VAR_2],
       !!(VAR_13[0] & 0x04));
 FUNC_0(VAR_12->input, VAR_11[VAR_10],
       !!(VAR_13[0] & 0x08));
 FUNC_0(VAR_12->input, VAR_11[VAR_7],
       !!(VAR_13[0] & 0x10));
 FUNC_0(VAR_12->input, VAR_11[VAR_9],
       !!(VAR_13[1] & 0x01));
 FUNC_0(VAR_12->input, VAR_11[VAR_6],
       !!(VAR_13[1] & 0x02));
 FUNC_0(VAR_12->input, VAR_11[VAR_1],
       !!(VAR_13[1] & 0x04));
 FUNC_0(VAR_12->input, VAR_11[VAR_0],
       !!(VAR_13[1] & 0x08));
 FUNC_0(VAR_12->input, VAR_11[VAR_5],
       !!(VAR_13[1] & 0x10));
 FUNC_0(VAR_12->input, VAR_11[VAR_3],
       !!(VAR_13[1] & 0x80));
 FUNC_1(VAR_12->input);
}
