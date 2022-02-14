
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsdvb_debugfs {int stats_count; char* stats_data; int stats_queue; int lock; } ;
struct sms_isdbt_stats {int statistics_type; int full_size; int is_rf_locked; int is_demod_locked; int is_external_lna_on; int SNR; int RSSI; int in_band_pwr; int carrier_offset; int bandwidth; int frequency; int transmission_mode; int modem_state; int guard_interval; int system_type; int partial_reception; int num_of_layers; int sms_to_host_tx_errors; TYPE_1__* layer_info; } ;
struct TYPE_2__ {int number_of_segments; int code_rate; int constellation; int ber; int ber_error_count; int ber_bit_count; int pre_ber; int ts_per; int error_ts_packets; int total_ts_packets; int ti_ldepth_i; int tmcc_errors; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct smsdvb_debugfs *VAR_1,
        struct sms_isdbt_stats *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 char *VAR_5;

 FUNC_1(&VAR_1->lock);
 if (VAR_1->stats_count) {
  FUNC_2(&VAR_1->lock);
  return;
 }

 VAR_5 = VAR_1->stats_data;

 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "statistics_type = %d\t", VAR_2->statistics_type);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "full_size = %d\n", VAR_2->full_size);

 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "is_rf_locked = %d\t\t", VAR_2->is_rf_locked);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "is_demod_locked = %d\t", VAR_2->is_demod_locked);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "is_external_lna_on = %d\n", VAR_2->is_external_lna_on);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "SNR = %d dB\t\t", VAR_2->SNR);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "RSSI = %d dBm\t\t", VAR_2->RSSI);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "in_band_pwr = %d dBm\n", VAR_2->in_band_pwr);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "carrier_offset = %d\t", VAR_2->carrier_offset);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "bandwidth = %d\t\t", VAR_2->bandwidth);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "frequency = %d Hz\n", VAR_2->frequency);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "transmission_mode = %d\t", VAR_2->transmission_mode);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "modem_state = %d\t\t", VAR_2->modem_state);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "guard_interval = %d\n", VAR_2->guard_interval);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "system_type = %d\t\t", VAR_2->system_type);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "partial_reception = %d\t", VAR_2->partial_reception);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "num_of_layers = %d\n", VAR_2->num_of_layers);
 VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
        "sms_to_host_tx_errors = %d\n", VAR_2->sms_to_host_tx_errors);

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  if (VAR_2->layer_info[VAR_3].number_of_segments < 1 ||
      VAR_2->layer_info[VAR_3].number_of_segments > 13)
   continue;

  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "\nLayer %d\n", VAR_3);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "\tcode_rate = %d\t",
         VAR_2->layer_info[VAR_3].code_rate);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "constellation = %d\n",
         VAR_2->layer_info[VAR_3].constellation);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "\tber = %-5d\t",
         VAR_2->layer_info[VAR_3].ber);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "\tber_error_count = %-5d\t",
         VAR_2->layer_info[VAR_3].ber_error_count);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "ber_bit_count = %-5d\n",
         VAR_2->layer_info[VAR_3].ber_bit_count);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "\tpre_ber = %-5d\t",
         VAR_2->layer_info[VAR_3].pre_ber);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "\tts_per = %-5d\n",
         VAR_2->layer_info[VAR_3].ts_per);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "\terror_ts_packets = %-5d\t",
         VAR_2->layer_info[VAR_3].error_ts_packets);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "total_ts_packets = %-5d\t",
         VAR_2->layer_info[VAR_3].total_ts_packets);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "ti_ldepth_i = %d\n",
         VAR_2->layer_info[VAR_3].ti_ldepth_i);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4,
         "\tnumber_of_segments = %d\t",
         VAR_2->layer_info[VAR_3].number_of_segments);
  VAR_4 += FUNC_0(&VAR_5[VAR_4], VAR_0 - VAR_4, "tmcc_errors = %d\n",
         VAR_2->layer_info[VAR_3].tmcc_errors);
 }

 VAR_1->stats_count = VAR_4;
 FUNC_2(&VAR_1->lock);
 FUNC_3(&VAR_1->stats_queue);
}
